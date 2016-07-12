//
//  ViewController.m
//  HcdGuideViewDemo
//
//  Created by polesapp-hcd on 16/7/12.
//  Copyright © 2016年 Polesapp. All rights reserved.
//

#import "ViewController.h"
#import "HcdGuideView.h"
#import <UIKit/UIKit.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.title = @"HcdGuideViewDemo";
    // Do any additional setup after loading the view, typically from a nib.
    
    NSMutableArray *images = [NSMutableArray new];
    
    [images addObject:[UIImage imageNamed:@"1"]];
    [images addObject:[UIImage imageNamed:@"2"]];
    [images addObject:[UIImage imageNamed:@"3"]];
    
    [[HcdGuideViewManager sharedInstance] showGuideViewWithImages:images
                                                   andButtonTitle:@"立即体验"
                                              andButtonTitleColor:[UIColor whiteColor]
                                                 andButtonBGColor:[UIColor clearColor]
                                             andButtonBorderColor:[UIColor whiteColor]];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
