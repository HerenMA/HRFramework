//
//  UIButton+HRExtensions.h
//  HRFramework
//
//  Created by 尹建军 on 2017/4/17.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, HRButtonStyle) {
    /** 只显示文字 */
    HRButtonStyleTextOnly = 1,
    /** 只显示图片 */
    HRButtonStyleImgOnly,
    /** 文字在左，图片在右 */
    HRButtonStyleTextLeft,
    /** 文字在右，图片在左 */
    HRButtonStyleTextRight,
    /** 文字在上，图片在下 */
    HRButtonStyleTextTop,
    /** 文字在下，图片在上 */
    HRButtonStyleTextBottom
};


/**
 UIButton 分类
 */
@interface UIButton (HRExtensions)

/**
 扩大UIButton的响应区域

 @param top <#top description#>
 @param right <#right description#>
 @param bottom <#bottom description#>
 @param left <#left description#>
 */
- (void)setEnlargeEdgeWithTop:(CGFloat)top right:(CGFloat)right bottom:(CGFloat)bottom left:(CGFloat)left;

/**
 调用这个方法前，必须先设置好 button 的 image 和 title/attributedtitle

 @param style <#style description#>
 @param space <#space description#>
 */
- (void)layoutButtonWithEdgeInsetsStyle:(HRButtonStyle)style imageTitleSpace:(CGFloat)space;

@end
