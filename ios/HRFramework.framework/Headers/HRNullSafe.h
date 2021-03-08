//
//  HRNullSafe.h
//  HRFramework
//
//  Created by MONO on 2020/5/7.
//  Copyright © 2020 浙江和仁科技股份有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

/// Null 对象安全策略
@interface HRNullSafe : NSObject

/// 数据处理
/// @param jsonData <#jsonData description#>
+ (id)conversationObject:(NSObject *)jsonData;

@end
