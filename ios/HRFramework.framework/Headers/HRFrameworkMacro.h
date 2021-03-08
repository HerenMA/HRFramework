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

/// iPhone X
#define HR_iPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125.f, 2436.f), [[UIScreen mainScreen] currentMode].size) : NO)
/// iPhone XR
#define HR_iPhoneXR ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828.f, 1792.f), [[UIScreen mainScreen] currentMode].size) : NO)
/// iPhone XS Max
#define HR_iPhoneXS_Max ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242.f, 2688.f), [[UIScreen mainScreen] currentMode].size) : NO)

/// Status bar height.
#define HR_StatusBarHeight (HR_iPhoneX || HR_iPhoneXR || HR_iPhoneXS_Max ? 44.f : 20.f)
/// Navigation bar height.
#define HR_NavigationBarHeight 44.f
/// Tabbar height.
#define HR_TabbarHeight (HR_iPhoneX || HR_iPhoneXR || HR_iPhoneXS_Max ? (49.f + 34.f) : 49.f)
/// Tabbar safe bottom margin.
#define HR_TabbarSafeBottomMargin (HR_iPhoneX || HR_iPhoneXR || HR_iPhoneXS_Max ? 34.f : 0.f)
/// Status bar & navigation bar height.
#define HR_StatusBarAndNavigationBarHeight (HR_iPhoneX || HR_iPhoneXR || HR_iPhoneXS_Max ? 88.f : 64.f)
/// View safeAreaInsets
#define HR_ViewSafeAreInsets(view) ({ UIEdgeInsets insets; if(@available(iOS 11.0, *)) { insets = view.safeAreaInsets; } else { insets = UIEdgeInsetsZero; } insets; })

#endif
