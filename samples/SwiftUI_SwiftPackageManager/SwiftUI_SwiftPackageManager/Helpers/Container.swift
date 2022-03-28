//
//  Container.swift
//  SwiftUI_SwiftPackageManager
//
//  Created by Alex Logan on 28/03/2022.
//

import SwiftUI

/// Clamps the width of the actual content to the readable content guide, with a grouped system background filling the rest of the screen.
struct Container<Content: View>: View {
    private let content: () -> (Content)
    
    private var readableWidth: CGFloat {
        UIViewController().view.readableContentGuide.layoutFrame.width
    }
    
    init(@ViewBuilder content: @escaping () -> (Content)) {
        self.content = content
    }
    
    var body: some View {
        ZStack {
            Color(UIColor.systemGroupedBackground).edgesIgnoringSafeArea(.all)
            content()
        }
    }
}

struct Container_Previews: PreviewProvider {
    static var previews: some View {
        Container {
            Text("hello.")
                .font(.subheadline.weight(.black))
        }
    }
}
