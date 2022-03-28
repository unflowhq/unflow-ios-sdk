//
//  HomeView.swift
//  SwiftUI_SwiftPackageManager
//
//  Created by Alex Logan on 28/03/2022.
//

import SwiftUI
import UnflowUI

struct HomeView: View {
    var body: some View {
        Container {
            ScrollView {
                VStack(alignment: .leading, spacing: 12) {
                    SectionHeader(text: "Opener View")
                        .padding(.leading)
                    // Our standard opener view, which provides a notification-like view.
                    OpenerView()

                    SectionHeader(text: "Custom opener View")
                        .padding(.leading)
                    // An example of customising the content of an opener, but without taking complete control of the layout
                    OpenerView { openerItemState in
                        OpenerImageTile(opener: openerItemState.opener)
                    }

                    SectionHeader(text: "Custom opener layout")
                        .padding(.leading)
                    // A fully customised example, showing a vertical list of content
                    OpenerView(openerHost: { openers in
                        ForEach(openers) { opener in
                            OpenerImageRow(opener: opener)
                        }
                    })
                    .padding(.horizontal)
                }
            }
            .navigationTitle(Text("Unflow SwiftUI"))
        }
    }
}

struct HomeView_Previews: PreviewProvider {
    static var previews: some View {
        HomeView()
    }
}
