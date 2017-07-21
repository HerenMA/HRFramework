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
 新字符串
 
 @return <#return value description#>
 */
+ (NSString *)uuid;

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

@end
