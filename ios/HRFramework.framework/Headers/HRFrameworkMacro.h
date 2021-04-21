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

// UIScreen width.
#define HR_ScreenWidth [UIScreen mainScreen].bounds.size.width
// UIScreen height.
#define HR_ScreenHeight [UIScreen mainScreen].bounds.size.height

/// iPhone X / iPhone XS / iPhone XR / iPhone 11 / iPhone 12
#define HR_iPhoneX (@available(iOS 11.0, *) ? [[UIApplication sharedApplication] delegate].window.safeAreaInsets.bottom > 0.f ? YES : NO : NO)

/// Status bar height.
#define HR_StatusBarHeight (HR_iPhoneX ? 44.f : 20.f)
/// Navigation bar height.
#define HR_NavigationBarHeight 44.f
/// Tabbar height.
#define HR_TabbarHeight (HR_iPhoneX ? (49.f + 34.f) : 49.f)
/// Tabbar safe bottom margin.
#define HR_TabbarSafeBottomMargin (HR_iPhoneX ? 34.f : 0.f)
/// Status bar & navigation bar height.
#define HR_StatusBarAndNavigationBarHeight (HR_iPhoneX ? 88.f : 64.f)

#endif
