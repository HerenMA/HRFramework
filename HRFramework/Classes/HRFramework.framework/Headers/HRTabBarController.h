//
//  HRTabBarController.h
//  HRFramework
//
//  Created by 尹建军 on 2017/4/5.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 选项卡
 */
@interface HRTabBarController : UITabBarController

/// 背景颜色
@property (strong, nonatomic) UIColor *backgroundColor;
/// 图标选中颜色
@property (strong, nonatomic) UIColor *iconSelectedColor;
/// 标题字体
@property (strong, nonatomic) UIFont *titleFont;
/// 标题默认颜色
@property (strong, nonatomic) UIColor *titleColor;
/// 标题选中颜色
@property (strong, nonatomic) UIColor *titleSelectedColor;
/// 分隔线颜色
@property (strong, nonatomic) UIColor *separatorColor;
/// 隐藏分隔线
@property (assign, nonatomic) BOOL hideSeparator;

@end
