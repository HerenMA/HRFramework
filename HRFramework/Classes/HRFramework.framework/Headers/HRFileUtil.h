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

@end
