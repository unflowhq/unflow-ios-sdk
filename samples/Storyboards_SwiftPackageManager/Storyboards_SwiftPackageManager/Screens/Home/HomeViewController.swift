import UIKit
import UnflowUI
import Combine

class HomeViewController: UIViewController {
    @IBOutlet weak var containerView: UIView!
    @IBOutlet weak var emptyLabelStack: UIStackView!
    
    private let viewModel = OpenerViewModel()
    
    private var cancellables: Set<AnyCancellable> = []
    
    override func viewDidLoad() {
        super.viewDidLoad()
        setupListeners()
    }
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        viewModel.updateContent()
    }
    
    // Listen for openers and work out if we should show our empty message or not.
    private func setupListeners() {
        viewModel.$openers.receive(on: DispatchQueue.main).sink {
            self.emptyLabelStack.alpha = $0.count > 0 ? 0 : 1
        }
        .store(in: &cancellables)
    }
}
