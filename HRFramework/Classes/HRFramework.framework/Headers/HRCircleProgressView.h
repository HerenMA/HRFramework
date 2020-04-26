//
//  HRCircleProgressView.h
//  HRFramework
//
//  Created by MONO on 2020/1/20.
//  Copyright © 2020 浙江和仁科技股份有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 圆环进度
 */
@interface HRCircleProgressView : UIView

/// 进度, 取值范围: 0 ~ 1
@property (assign, nonatomic) CGFloat progressValue;

/// 圆环线条宽度
@property (assign, nonatomic) CGFloat circleLineWith;
/// 背景颜色
@property (strong, nonatomic) UIColor *backgroundColor;
/// 背景圆环颜色
@property (strong, nonatomic) UIColor *backgroundCircleLayerColor;
/// 前置圆环颜色
@property (strong, nonatomic) UIColor *foreLayerColor;

/// 标签字体
@property (strong, nonatomic) UIFont *valueLabelFont;
/// 标签字体颜色
@property (strong, nonatomic) UIColor *valueLabelColor;
/// 标签文字
@property (strong, nonatomic) NSString *valueLabelText;

@end
