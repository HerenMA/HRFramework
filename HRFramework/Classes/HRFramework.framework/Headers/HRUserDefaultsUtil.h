//
//  HRUserDefaultsUtil.h
//  HRFramework
//
//  Created by 尹建军 on 2017/7/7.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 NSUserDefaults工具类
 */
@interface HRUserDefaultsUtil : NSObject

/**
 读取

 @param name <#name description#>
 @param defaultValue <#defaultValue description#>
 @return <#return value description#>
 */
+ (id)getUserDefaults:(NSString *)name defaultValue:(id)defaultValue;

/**
 保存

 @param name <#name description#>
 @param value <#value description#>
 */
+ (void)saveUserDefaults:(NSString *)name value:(id)value;

/**
 删除

 @param name <#name description#>
 */
+ (void)delUserDefaults:(NSString *)name;

@end
