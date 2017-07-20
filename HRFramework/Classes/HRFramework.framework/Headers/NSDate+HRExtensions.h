//
//  NSDate+HRExtensions.h
//  HRFramework
//
//  Created by 尹建军 on 2017/4/10.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 NSDate 分类
 */
@interface NSDate (HRExtensions)

/**
 获取系统当前时间
 
 @return <#return value description#>
 */
+ (NSDate *)localDate;

/**
 获取系统当前时间

 @return <#return value description#>
 */
+ (NSString *)localDateString;

/**
 获取系统当前时间戳

 @return <#return value description#>
 */
+ (NSString *)localTimeIntervalString;


#pragma mark - 转换
/**
 字符串转 NSDate

 @param string 日期字符串
 @return <#return value description#>
 */
+ (NSDate *)stringConvert:(NSString *)string;

/**
 时间戳转 NSDate

 @param timeInterval 时间戳字符串
 @return <#return value description#>
 */
+ (NSDate *)timeIntervalConvert:(NSString *)timeInterval;


#pragma mark - 微信日期
/**
 完整日期格式（12小时制）

 @return <#return value description#>
 */
- (NSString *)wxFullDateFormat;

/**
 简单日期格式（24小时制）

 @return <#return value description#>
 */
- (NSString *)wxSimpleDateFormat;


#pragma mark - 系统日期
/**
 通知日期格式（iOS系统）

 @return <#return value description#>
 */
- (NSString *)sysNotificationDateFormat;

@end
