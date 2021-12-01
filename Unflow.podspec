Pod::Spec.new do |s|
    s.name                  = 'Unflow'
    s.version               = '1.1.0'
    s.summary               = 'A low-code tool for marketers to ship screens quickly'
    s.source                = { :git => "https://github.com/unflowhq/unflow-ios-sdk.git", :tag => s.version.to_s }
    s.homepage              = 'https://www.unflow.com'
    s.license               = { :type => "Commercial", :text => "Copyright 2021 Letkit Inc." }
    s.author                = { 'Unflow' => 'team@monaru.io' }

    s.platform              = :ios
    s.swift_version         = '5.5'
    s.ios.deployment_target = '11.0'
    s.vendored_frameworks   = 'UnflowUI.xcframework', 'Unflow.xcframework'
end
