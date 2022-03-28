import UIKit
import UnflowUI

class SceneDelegate: UIResponder, UIWindowSceneDelegate {

    var window: UIWindow?
    
    func sceneDidBecomeActive(_ scene: UIScene) {
        // Sync Unflow on scene changes
        UnflowSDK.client.sync()
    }

}

