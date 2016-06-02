//
//  UIApplication+ExtensionSafeAdditions.h
//
//  Copyright © 2016 Box. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  This category's purpose is to allow successful compilation when using BOXContentSDK in an extension.
 *  If the target you're running is not an extension extension, simply add the build flag TARGET_IS_NOT_EXTENSION to it to avoid any build failures because of unsafe API calls.
 */
@interface UIApplication (ExtensionSafeAdditions)

+ (UIApplication *)box_sharedApplication;

- (BOOL)box_openURL:(NSURL *)url;

- (BOOL)box_canOpenURL:(NSURL *)url;

@end
