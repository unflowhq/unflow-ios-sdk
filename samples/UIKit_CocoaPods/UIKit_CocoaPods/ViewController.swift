import UIKit
import UnflowUI

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        view.backgroundColor = .cyan

        let unflowViewController = OpenerViewController()
        addChild(unflowViewController)
        view.addSubview(unflowViewController.view)
        unflowViewController.didMove(toParent: self)
    }
}

