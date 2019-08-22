//
//  NSString+HRExtensions.h
//  HRFramework
//
//  Created by 尹建军 on 2017/7/20.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 NSString 分类
 */
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

/**
 URL参数 escape 编码

 @return <#return value description#>
 */
- (NSString *)escapeURLParams;

/**
 对除ASCII字母、数字、标点符号 @  *  _  +  -  .  / 以外的其他字符进行编码
 
 @return <#return value description#>
 */
- (NSString *)escape;

/**
 escape 解码
 
 @return <#return value description#>
 */
- (NSString *)unescape;

/**
 对URL的组成部分进行个别编码，而不用于对整个URL进行编码

 @return <#return value description#>
 */
- (NSString *)encodeURIComponent;

/**
 encodeURIComponent 解码
 
 @return <#return value description#>
 */
- (NSString *)decodeURIComponent;

/**
 DES 加密
 
 @param key 密钥
 @return <#return value description#>
 */
- (NSString *)encodeDesWithKey:(NSString *)key;

/**
 DES 解密
 
 @param key 密钥
 @return <#return value description#>
 */
- (NSString *)decodeDesWithKey:(NSString *)key;

/**
 Base64 字符串还原成 UIImage

 @return <#return value description#>
 */
- (UIImage *)convertToImage;

@end
