//
//  XHViewController.h
//  xh2048
//
//  Created by hui xiang on 2019/2/13.
//  Copyright © 2019 xianghui. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SpriteKit/SpriteKit.h>

@interface XHViewController : UIViewController

- (void)updateScore:(NSInteger)score;

- (void)endGame:(BOOL)won;

@end
