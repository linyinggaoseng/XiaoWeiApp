//
//  OrderList.h
//  WuYiMeiShi_Server
//
//  Created by 物恋网 on 17/1/9.
//  Copyright © 2017年 wlw. All rights reserved.
//

#import "WlwAbstractModel.h"

@interface OrderList : WlwAbstractModel
@property (nonatomic, strong) NSArray *data;

+(Class)data_class;
@end
