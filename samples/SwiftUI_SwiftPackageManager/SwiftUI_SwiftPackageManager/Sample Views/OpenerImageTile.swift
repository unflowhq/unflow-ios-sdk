//
//  OpenerImageTile.swift
//  SwiftUI_SwiftPackageManager
//
//  Created by Alex Logan on 28/03/2022.
//

import SwiftUI
import UnflowUI

/// Square tiles that use the opener image as their background.
/// Designed to be used with OpenerView { } which handles the layout and interaction for you.
struct OpenerImageTile: View {
    let opener: Opener

    var body: some View {
        VStack(alignment: .leading) {
            Text(opener.title)
                .font(.subheadline.weight(.semibold))
                .foregroundColor(.white)
        }
        .padding()
        .frame(maxWidth: .infinity, maxHeight: .infinity, alignment: .bottomLeading)
        .multilineTextAlignment(.leading)
        .background(
            image
        )
        .clipShape(RoundedRectangle(cornerRadius: 12, style: .continuous))
        .aspectRatio(1.0, contentMode: .fit)
        .frame(width: 160)
    }
    
    var image: some View {
        ZStack {
            RemoteImage(url: URL(string: opener.imageURL ?? ""))
                .aspectRatio(contentMode: .fill)
            LinearGradient(colors: [.clear, .black.opacity(0.5)], startPoint: .top, endPoint: .bottom)
        }
    }
}
