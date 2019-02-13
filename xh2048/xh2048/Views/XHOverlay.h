//
//  XHOverlay.h
//  xh2048
//
//  Created by hui xiang on 2019/2/13.
//  Copyright © 2019 xianghui. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XHOverlay : UIView

@property (nonatomic, weak) IBOutlet UILabel *message;

@property (nonatomic, weak) IBOutlet UIButton *keepPlaying;

@property (nonatomic, weak) IBOutlet UIButton *restartGame;

@end
