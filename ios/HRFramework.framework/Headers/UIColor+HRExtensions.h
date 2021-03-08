//
//  UIColor+HRExtensions.h
//  HRFramework
//
//  Created by 尹建军 on 2017/4/5.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 UIColor 分类
 */
@interface UIColor (HRExtensions)

#pragma mark - 十六进制
/**
 十六进制转换
 
 @param hex 十六进制
 @return <#return value description#>
 */
+ (UIColor *)colorWithHex:(NSUInteger)hex;

/**
 十六进制转换

 @param hex <#hex description#>
 @param alpha <#alpha description#>
 @return <#return value description#>
 */
+ (UIColor *)colorWithHex:(NSUInteger)hex andAlpha:(CGFloat)alpha;

/**
 获取十六进制值
 
 @return <#return value description#>
 */
- (NSUInteger)hexValue;


#pragma mark - CSS 颜色
/**
 CSS 颜色转换

 @param hexString CSS 颜色值
 @return <#return value description#>
 */
+ (UIColor *)colorWithHexStr:(NSString *)hexString;


#pragma mark - 属性
/**
 十六进制值

 @return <#return value description#>
 */
- (NSString *)hexString;

@end
