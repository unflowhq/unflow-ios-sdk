//
//  OpenerTileCell.swift
//  Storyboards_SwiftPackageManager
//
//  Created by Alex Logan on 29/03/2022.
//

import Foundation
import UIKit
import UnflowUI
import SwiftUI

class OpenerTileCell: UICollectionViewCell {
    static let identifier = "OpenerTileCell"
    
    var imageLoader: ImageLoader?
    
    @IBOutlet var imageView: UIImageView!
    @IBOutlet var titleLabel: UILabel!
    @IBOutlet var subtitleLabel: UILabel!
    
    var opener: Opener? {
        didSet {
            titleLabel.text = opener?.title
            subtitleLabel.text = opener?.subtitle
            if let imageUrlString = opener?.imageURL, let imageUrl = URL(string: imageUrlString) {
                imageLoader?.loadImage(at: imageUrl) { result in
                    // Make sure the image isn't old
                    guard self.opener?.imageURL == imageUrlString else {
                        return
                    }
                    switch result {
                    case .success(let image):
                        self.updateImage(to: image)
                    default:
                        self.updateImage(to: nil)
                    }
                }
            } else {
                self.updateImage(to: nil)
            }
        }
    }
    
    override func prepareForReuse() {
        opener = nil
    }
    
    private func updateImage(to image: UIImage?) {
        DispatchQueue.main.async {
            UIView.transition(with: self.imageView, duration: 0.2, options: .transitionCrossDissolve) {
                self.imageView.image = image
            }
        }
    }
    
}
