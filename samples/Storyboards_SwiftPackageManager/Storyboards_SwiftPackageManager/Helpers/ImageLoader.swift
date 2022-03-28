//
//  ImageLoader.swift
//  Storyboards_SwiftPackageManager
//
//  Created by Alex Logan on 29/03/2022.
//

import Foundation
import UIKit
import Combine

/// A basic class to load images from the web, without any explicit caching.
class ImageLoader {
    private var images = [URL: UIImage]()
    private var cancellables = Set<AnyCancellable>()
  
    func loadImage(at url: URL, completion: @escaping ((Result<UIImage, ImageLoaderError>) -> ())) {
        if let existingImage = images[url] {
            completion(.success(existingImage))
            return
        }
        
        let task = URLSession.shared.dataTask(with: url) { data, _, _ in
            guard let data = data, let image = UIImage(data: data) else {
                completion(.failure(ImageLoaderError.failedToLoadImage))
                return
            }
            completion(.success(image))
        }
        task.resume()
    }
    
}

enum ImageLoaderError: Error {
    case failedToLoadImage
}
