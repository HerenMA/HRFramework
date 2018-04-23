//
//  HRIdentityCardUtil.h
//  HRFramework
//
//  Created by 尹建军 on 2018/4/18.
//  Copyright © 2018年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 身份证类
 */
@interface HRIdentityCardUtil : NSObject

/**
 获取出生日期
 
 @param numberStr 身份证
 @return 出生日期（yyyy-MM-dd）
 */
+ (NSString *)getIdentityCardBirthday:(NSString *)numberStr;

/**
 获取出生日期

 @param numberStr 身份证
 @param format 返回的出生日期格式
 @return 出生日期
 */
+ (NSString *)getIdentityCardBirthday:(NSString *)numberStr format:(NSString *)format;

/**
 获取年龄
 
 @param numberStr 身份证
 @return 年龄
 */
+ (NSString *)getIdentityCardAge:(NSString *)numberStr;

/**
 获取性别
 
 @param numberStr 身份证
 @return 性别
 */
+ (NSString *)getIdentityCardSex:(NSString *)numberStr;

@end
