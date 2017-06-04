//
//  DYViewModelProtocol.h
//  DYPlayNews
//
//  Created by 袁斌 on 2017/6/4.
//  Copyright © 2017年 https://github.com/DefaultYuan . All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol DYViewModelProtocol <NSObject>

@optional
- (RACSignal *)fetchNewData;
@end
