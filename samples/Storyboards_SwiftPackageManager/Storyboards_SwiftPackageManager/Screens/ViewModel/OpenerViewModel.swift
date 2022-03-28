//
//  OpenerViewModel.swift
//  Storyboards_SwiftPackageManager
//
//  Created by Alex Logan on 29/03/2022.
//

import Foundation
import UnflowUI
import Combine

/// Combine based example that fetches the latest openers and emits them.
class OpenerViewModel {
    @Published var openers: [Opener] = []
    
    private var cancellables: Set<AnyCancellable> = []
    
    func updateContent() {
        UnflowSDK.client.openers(id: "default")
            .sink(receiveValue: { openers in
                self.openers = openers
            })
            .store(in: &cancellables)
    }
}
