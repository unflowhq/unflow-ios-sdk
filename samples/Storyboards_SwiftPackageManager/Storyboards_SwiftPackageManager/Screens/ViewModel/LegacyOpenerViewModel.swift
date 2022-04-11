//
//  LegacyOpenerViewModel.swift
//  Storyboards_SwiftPackageManager
//
//  Created by Alex Logan on 29/03/2022.
//

import Foundation
import UnflowUI

protocol LegacyOpenerViewModelDelegate: AnyObject {
    func didUpdateContent(viewModel: LegacyOpenerViewModel)
}

/// Legacy view model example that fetches openers and passes back a message, rather than using Combine.
class LegacyOpenerViewModel {
    weak var delegate: LegacyOpenerViewModelDelegate?
    
    var openers: [Opener] = []
    
    func updateContent() {
        UnflowSDK.client.getOpeners { openerResult in
            switch openerResult {
            case .success(let openers):
                self.openers = openers
            default:
                return
            }
            self.delegate?.didUpdateContent(viewModel: self)
        }
    }
}
