//
//  HRValidateUtil.h
//  HRFramework
//
//  Created by 尹建军 on 2017/7/20.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 验证工具类
 */
@interface HRValidateUtil : NSObject

/**
 数字验证

 @param string 字符串
 @return <#return value description#>
 */
+ (BOOL)isPureNumber:(NSString *)string;

/**
 身份证验证

 @param string 字符串
 @return <#return value description#>
 */
+ (BOOL)isIdentityCard:(NSString *)string;

/**
 手机号验证

 @param string 字符串
 @return <#return value description#>
 */
+ (BOOL)isPhoneNumber:(NSString *)string;

/**
 邮箱验证

 @param string 字符串
 @return <#return value description#>
 */
+ (BOOL)isEmailAdress:(NSString *)string;

@end
