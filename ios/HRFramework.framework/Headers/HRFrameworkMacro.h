//
//  HRFrameworkMacro.h
//  HRFramework
//
//  Created by MONO on 2020/1/6.
//  Copyright © 2020 浙江和仁科技股份有限公司. All rights reserved.
//

#ifndef HRFrameworkMacro_h
#define HRFrameworkMacro_h

#ifdef DEBUG
    #define DMLog(...) NSLog(@"%d, %s, %@", __LINE__, __FUNCTION__, [NSString stringWithFormat:__VA_ARGS__])
#else
    #define DMLog(...) do { } while (0)
#endif

// Screen width.
#define HR_ScreenWidth                     [UIScreen mainScreen].bounds.size.width
// Screen height.
#define HR_ScreenHeight                    [UIScreen mainScreen].bounds.size.height

/// iPhone X / iPhone XS / iPhone XR / iPhone 11 / iPhone 12 / iPhone 13 / iPhone 14
#define HR_iPhoneX \
    ({ \
        BOOL iPhoneX = NO; \
        if ([UIDevice currentDevice].userInterfaceIdiom == UIUserInterfaceIdiomPad) { \
            iPhoneX = NO; \
        } else { \
            CGSize size = [UIScreen mainScreen].bounds.size; \
            NSInteger notchValue = size.width / size.height * 100; \
            iPhoneX = (notchValue == 216 || notchValue == 46) ? YES : NO; \
        } \
        (iPhoneX); \
    })
/// StatusBar height.
#define HR_StatusBarHeight \
    ({ \
        CGFloat statusBarHeight = [UIApplication sharedApplication].statusBarFrame.size.height; \
        if (@available(iOS 13.0, *)) { \
            UIWindowScene *windowScene = (UIWindowScene *)[UIApplication sharedApplication].connectedScenes.anyObject; \
            statusBarHeight = windowScene.statusBarManager.statusBarFrame.size.height; \
        } \
        (statusBarHeight); \
    })
/// NavigationBar height.
#define HR_NavigationBarHeight             44.f
/// StatusBar & NavigationBar height.
#define HR_StatusBarAndNavigationBarHeight (HR_StatusBarHeight + HR_NavigationBarHeight)
/// TabBar height.
#define HR_TabBarHeight                    (49.f + HR_BottomSafeArea)
/// Bottom safeArea .
#define HR_BottomSafeArea                  (HR_iPhoneX ? 34.f : 0.f)

#endif
