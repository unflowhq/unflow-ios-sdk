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

                    SectionHeader(text: "Spaces View")
                        .padding(.leading)
                    // Our spaces view, which provides a stack of notification like views.
                    // We've disabled filtering out the default view, so you'll see your default content both here and in the opener view
                    // By default, this option is enabled, and your spaces view will simply be empty if you only have the default space.
                    // To match our fonts and colors to the wrapper app, we've overriden the default font and color for the headers.
                    SpacesView(
                        filterDefault: false,
                        font: .subheadline.weight(.semibold),
                        fontColor: .primary
                    )

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
