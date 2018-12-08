//
//  AddNewAddressVC.h
//  JunJie
//
//  Created by 小熊 on 2017/2/23.
//  Copyright © 2017年 小熊. All rights reserved.
//

#import <UIKit/UIKit.h>
@class address;
@interface AddNewAddressVC : BaseVC
@property (nonatomic,assign) NSInteger diff;
@property (nonatomic,strong) address *model;
@property (nonatomic,assign) NSInteger status; //默认地址
@end
