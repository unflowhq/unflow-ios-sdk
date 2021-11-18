import UIKit
import UnflowUI

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        view.backgroundColor = .cyan
        
        let unflowViewController = OpenerViewController()
        view.addSubview(unflowViewController.view)
    }


}

