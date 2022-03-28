//
//  RemoteImage.swift
//  SwiftUI_SwiftPackageManager
//
//  Created by Alex Logan on 28/03/2022.
//

import SwiftUI

/// A basic, iOS 13 compatible, remote image loader.
struct RemoteImage: View {
    @StateObject var imageLoader = RemoteImageLoader()
    
    var url: URL?
    
    var body: some View {
        Group {
            switch imageLoader.imageState {
            case .idle:
                Rectangle().foregroundColor(.clear)
                    .onAppear {
                        imageLoader.url = url
                        imageLoader.loadImage()
                    }
            case .loaded(let uiImage):
                Image(uiImage: uiImage)
                    .resizable()
            }
        }
    }
}

enum RemoteImageState: Equatable {
    case idle, loaded(UIImage)
}

class RemoteImageLoader: ObservableObject {
    @Published var imageState: RemoteImageState = .idle
    
    var dataTask: URLSessionDataTask?
    
    var url: URL? {
        willSet {
            if newValue != url {
                dataTask?.cancel()
                updateImageState(to: .idle)
            }
        }
    }
    
    func loadImage() {
        guard imageState == .idle, let url = url else {
            return
        }
        dataTask = URLSession.shared.dataTask(with: url) { data, _, _ in
            guard let data = data else {
                return
            }
            if let image = UIImage(data: data) {
                self.updateImageState(to: .loaded(image))
            }
        }
        dataTask?.resume()
    }
    
    private func updateImageState(to state: RemoteImageState) {
        DispatchQueue.main.async {
            withAnimation {
                self.imageState = state
            }
        }
    }
}
