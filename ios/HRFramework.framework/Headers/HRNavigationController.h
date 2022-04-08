//
//  HRNavigationController.h
//  HRFramework
//
//  Created by 尹建军 on 2017/4/5.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 导航条
 */
@interface HRNavigationController : UINavigationController

/// 状态栏样式
@property (assign, nonatomic) UIStatusBarStyle statusBarStyle;
/// 背景颜色
@property (strong, nonatomic) UIColor *backgroundColor;
/// 标题颜色
@property (strong, nonatomic) UIColor *titleColor;
/// 着色颜色
@property (strong, nonatomic) UIColor *tintColor;
/// 返回按钮标题
@property (strong, nonatomic) NSString *backTitle;
/// 返回按钮图片
@property (strong, nonatomic) UIImage *backImage;
/// 隐藏分隔线
@property (assign, nonatomic) BOOL hideSeparator;
/// 分隔线颜色
@property (strong, nonatomic) UIColor *separatorColor;

/// 设备方向
@property (assign, nonatomic) UIInterfaceOrientation interfaceOrientation;
/// 屏幕旋转方向
@property (assign, nonatomic) UIInterfaceOrientationMask interfaceOrientationMask;

/// Returns the popped controller.
/// @param animationTransition <#animationTransition description#>
- (UIViewController *)popViewControllerAnimationTransition:(UIViewAnimationTransition)animationTransition;

/// Uses a horizontal slide transition. Has no effect if the view controller is already in the stack.
/// @param viewController <#viewController description#>
/// @param animationTransition <#animationTransition description#>
- (void)pushViewController:(UIViewController *)viewController animationTransition:(UIViewAnimationTransition)animationTransition;

@end
