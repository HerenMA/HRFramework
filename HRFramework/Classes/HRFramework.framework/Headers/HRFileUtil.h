//
//  HRFileUtil.h
//  HRFramework
//
//  Created by 尹建军 on 2017/4/17.
//  Copyright © 2017年 浙江和仁科技股份有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 文件工具类
 */
@interface HRFileUtil : NSObject

/**
 读取文件

 @param pathAndName 路径与文件名
 @return 字符串
 */
+ (NSString *)stringWithPathAndName:(NSString *)pathAndName;

/**
 读取默认 Bundle 中文件

 @param filePathAndName 相对路径与名称
 @return 字符串
 */
+ (NSString *)stringWithBundleOffilePathAndName:(NSString *)filePathAndName;

/**
 读取指定 Bundle 中文件

 @param bundleName Bundle 名称
 @param filePathAndName 相对路径与名称
 @return 字符串
 */
+ (NSString *)stringWithBundle:(NSString *)bundleName filePathAndName:(NSString *)filePathAndName;

/**
 二进制读取文件
 
 @param filePath 文件路径与文件名
 @return <#return value description#>
 */
+ (NSData *)dataAtPath:(NSString *)filePath;



/**
 判断文件是否存在

 @param filePath 文件路径与文件名
 @return <#return value description#>
 */
+ (BOOL)fileExistsAtPath:(NSString *)filePath;

/**
 判断文件夹是否存在（不存在自动创建）

 @param filePath 文件夹路径
 @return <#return value description#>
 */
+ (BOOL)directoryExistsAtPath:(NSString *)filePath;

/**
 删除文件

 @param filePath 文件路径与文件名
 @return <#return value description#>
 */
+ (BOOL)deleteFileAtPath:(NSString *)filePath;

/**
 移动文件
 
 @param filePath 文件路径与文件名
 @param toPath 目标路径与文件名
 @return <#return value description#>
 */
+ (BOOL)moveFileAtPath:(NSString *)filePath toPath:(NSString *)toPath;

/**
 拷贝文件
 
 @param filePath 文件路径与文件名
 @param toPath 目标路径与文件名
 @return <#return value description#>
 */
+ (BOOL)copyFileAtPath:(NSString *)filePath toPath:(NSString *)toPath;

@end
