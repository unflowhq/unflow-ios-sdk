//
//  GridViewController.swift
//  Storyboards_SwiftPackageManager
//
//  Created by Alex Logan on 29/03/2022.
//

import Foundation
import UIKit
import UnflowUI

/// A UIKit example of using the Unflow Openers with a pre iOS 13 style collection view & data source
class GridViewController: UIViewController {
    private let imageLoader = ImageLoader()
    private var viewModel = LegacyOpenerViewModel()
        
    // MARK: - CollectionView Setup
    private let itemSpacing: CGFloat = 8
    private let insets: CGFloat = 20
    let desiredCellHeight: CGFloat = 160
    let itemsPerRow: CGFloat = 2
    var collectionViewContentWidth: CGFloat = 0
    var itemWidth: CGFloat {
        ( collectionViewContentWidth / itemsPerRow ) - ( itemSpacing )
    }
    

    @IBOutlet var collectionView: UICollectionView! {
        didSet {
            collectionView.register(UINib(nibName: "OpenerTileCell", bundle: nil), forCellWithReuseIdentifier: OpenerTileCell.identifier)
            collectionView.dataSource = self
            collectionView.delegate = self
            collectionView.contentInset = UIEdgeInsets(top: 0, left: 0, bottom: 0, right: 0)
        }
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        updateLayoutSizes()
        viewModel.delegate = self
        viewModel.updateContent()
    }
    
    override func viewDidLayoutSubviews() {
        super.viewDidLayoutSubviews()
        updateLayoutSizes()
    }
    
    private func updateLayoutSizes() {
        self.collectionViewContentWidth = collectionView.frame.width - (insets * 2)
    }
}

// MARK: - LegacyOpenerViewModelDelegate
extension GridViewController: LegacyOpenerViewModelDelegate {
    func didUpdateContent(viewModel: LegacyOpenerViewModel) {
        DispatchQueue.main.async {
            self.collectionView.reloadData()
        }
    }
}

// MARK: - UICollectionViewDataSource
extension GridViewController: UICollectionViewDataSource {
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        guard let cell = collectionView.dequeueReusableCell(withReuseIdentifier: OpenerTileCell.identifier, for: indexPath) as? OpenerTileCell else {
            return UICollectionViewCell()
        }
        cell.imageLoader = imageLoader
        cell.opener = viewModel.openers[indexPath.row]
        return cell
    }
    
    func numberOfSections(in collectionView: UICollectionView) -> Int {
        return 1
    }
    
    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        return viewModel.openers.count
    }
}
// MARK: - UICollectionViewDelegate
extension GridViewController: UICollectionViewDelegate {
    func collectionView(_ collectionView: UICollectionView, didSelectItemAt indexPath: IndexPath) {
        guard viewModel.openers.indices.contains(indexPath.row) else { return }
        let opener = viewModel.openers[indexPath.row]
        try? UnflowSDK.client.openScreen(withID: opener.id)
    }
}

// MARK: - UICollectionViewDelegateFlowLayout
/// Collection view layout that makes the first item larger than the rest.
extension GridViewController: UICollectionViewDelegateFlowLayout {
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, minimumInteritemSpacingForSectionAt section: Int) -> CGFloat {
        return 8
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, sizeForItemAt indexPath: IndexPath) -> CGSize {
        if indexPath.row == 0 {
            let imageWidth = collectionViewContentWidth
            let imageHeight = imageWidth/(16/9)
            return CGSize(width: collectionViewContentWidth, height: imageHeight + 50) // 50 is the bottom content of our tile
        } else {
            let imageWidth = itemWidth
            let imageHeight = imageWidth/(16/9)
            return CGSize(width: itemWidth, height: (imageHeight) + 50)
        }
    }
}
