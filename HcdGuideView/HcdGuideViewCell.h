//
//  HcdGuideViewCell.h
//  HcdGuideViewDemo
//
//  Created by polesapp-hcd on 16/7/12.
//  Copyright © 2016年 Polesapp. All rights reserved.
//

#import <UIKit/UIKit.h>

static NSString *kCellIdentifier_HcdGuideViewCell = @"HcdGuideViewCell";

@interface HcdGuideViewCell : UICollectionViewCell

@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, strong) UIButton *button;

@end
