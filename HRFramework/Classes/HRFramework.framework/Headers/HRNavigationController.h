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
/// 返回按钮图片
@property (strong, nonatomic) UIImage *backImage;
/// 隐藏分隔线
@property (assign, nonatomic) BOOL hideSeparator;
/// 分隔线颜色
@property (strong, nonatomic) UIColor *separatorColor;

@end
