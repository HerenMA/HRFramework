//
//  NSString+HRExtensions.h
//  HRFramework
//
//  Created by 尹建军 on 2017/7/20.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (HRExtensions)

/**
 字符串是否为空

 @return <#return value description#>
 */
- (BOOL)isEmpty;

/**
 获取首字大写拼音

 @return <#return value description#>
 */
- (NSString *)firstCharactor;

/**
 获取全拼

 @return <#return value description#>
 */
- (NSString *)allCharactor;

/**
 URL字符串参数转换成字典
 
 @return <#return value description#>
 */
- (NSDictionary *)convertToDictionary;

/**
 获取URL指定参数值

 @param key 参数Key
 @return <#return value description#>
 */
- (NSString *)getURLParamsWithKey:(NSString *)key;

@end
