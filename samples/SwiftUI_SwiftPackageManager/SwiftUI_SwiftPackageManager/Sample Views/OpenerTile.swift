//
//  OpenerTile.swift
//  SwiftUI_SwiftPackageManager
//
//  Created by Alex Logan on 28/03/2022.
//

import SwiftUI
import UnflowUI

/// A simple stack of a rounded image, and the title of an opener. If a subtitle is available, it'll show that too.
struct OpenerTile: View {
    let opener: Opener
    
    var body: some View {
        Button {
            try? UnflowSDK.client.openScreen(withID: opener.id)
        } label: {
            VStack(alignment: .leading, spacing: 8) {
                image
                text
            }
        }
    }
    
    var image: some View {
        Rectangle()
            .foregroundColor(.clear)
            .aspectRatio(1.33, contentMode: .fit)
            .background(
                RemoteImage(url: URL(string: opener.imageURL ?? ""))
                    .aspectRatio(contentMode: .fill)
            )
            .clipShape(RoundedRectangle(cornerRadius: 12, style: .continuous))
    }
    
    var text: some View {
        VStack(alignment: .leading) {
            Text(opener.title)
                .font(.subheadline.weight(.semibold))
                .foregroundColor(.primary)
            if let subtitle = opener.subtitle {
                Text(subtitle)
                    .font(.subheadline.weight(.medium))
                    .foregroundColor(.secondary)
            }
        }
        .multilineTextAlignment(.leading)
    }
}
