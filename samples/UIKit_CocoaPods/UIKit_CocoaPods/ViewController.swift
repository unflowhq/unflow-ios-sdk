import UIKit
import UnflowUI

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()

        if #available(iOS 13.0, *) {
            view.backgroundColor = .systemGroupedBackground
        }

        let unflowViewController = OpenerViewController()
        addChild(unflowViewController)
        view.addSubview(unflowViewController.view)
        unflowViewController.didMove(toParent: self)
    }
}
