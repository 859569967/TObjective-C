//
//  HHTableBinder.h
//  TObjective-C
//
//  Created by HeiHuaBaiHua on 2017/11/13.
//  Copyright © 2017年 HeiHuaBaiHua. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "HHListBinderProtocol.h"
@interface HHTableBinder : UIViewController<HHTableBinderProtocol>

- (UITableView *)view;

@end
