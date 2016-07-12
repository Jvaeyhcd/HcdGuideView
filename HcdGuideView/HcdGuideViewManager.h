//
//  HcdGuideViewManager.h
//  HcdGuideViewDemo
//
//  Created by polesapp-hcd on 16/7/12.
//  Copyright © 2016年 Polesapp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface HcdGuideViewManager : NSObject

/**
 *  创建单例模式
 *
 *  @return 单例
 */
+ (instancetype)sharedInstance;

/**
 *  引导页图片
 *
 *  @param images      引导页图片
 *  @param title       按钮文字
 *  @param titleColor  文字颜色
 *  @param bgColor     按钮背景颜色
 *  @param borderColor 按钮边框颜色
 */
- (void)showGuideViewWithImages:(NSArray *)images
                 andButtonTitle:(NSString *)title
            andButtonTitleColor:(UIColor *)titleColor
               andButtonBGColor:(UIColor *)bgColor
           andButtonBorderColor:(UIColor *)borderColor;

@end
