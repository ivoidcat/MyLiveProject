//
//  Macros.h
//  MyLiveProject
//
//  Created by 任波 on 17/2/7.
//  Copyright © 2017年 RENB. All rights reserved.
//

#ifndef Macros_h
#define Macros_h

// 屏幕大小、宽、高
#define SCREEN_BOUNDS [UIScreen mainScreen].bounds
#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height

// 导航栏的高度
#define NAV_HEIGHT 64

// RGB颜色(10进制)
#define RGB(r, g, b, a) [UIColor colorWithRed:(r) / 255.0 green:(g) / 255.0 blue:(b) / 255.0 alpha:(a)]

// RGB颜色(16进制)
#define RGB_HEX(rgbValue, a) \
[UIColor colorWithRed:((CGFloat)((rgbValue & 0xFF0000) >> 16)) / 255.0 \
green:((CGFloat)((rgbValue & 0xFF00) >> 8)) / 255.0 \
blue:((CGFloat)(rgbValue & 0xFF)) / 255.0 alpha:(a)]

// iOS的版本号
#define IOS_VERSION [UIDevice currentDevice].systemVersion.doubleValue

// AppDelegate 对象
#define appDelegate ((AppDelegate *)[[UIApplication sharedApplication] delegate])

// 本地沙盒目录
#define DOCUMENT_PATH NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES).lastObject
#define LIBRARY_PATH NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES).lastObject
#define TEMP_PATH NSTemporaryDirectory()

// 日志输出宏定义
#ifdef DEBUG
// 调试状态
#define MYLog(...) NSLog(__VA_ARGS__)
#else
// 发布状态
#define MYLog(...)
#endif


#endif /* Macros_h */
