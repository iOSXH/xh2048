//
//  XHGameManager.h
//  xh2048
//
//  Created by hui xiang on 2019/2/2.
//  Copyright © 2019 xianghui. All rights reserved.
//

#import <Foundation/Foundation.h>
@class XHScene;
@class XHGrid;

typedef NS_ENUM(NSInteger, XHDirection) {
    XHDirectionUp,
    XHDirectionLeft,
    XHDirectionDown,
    XHDirectionRight
};

@interface XHGameManager : NSObject

/**
 * Starts a new session with the provided scene.
 *
 * @param scene The scene in which the game happens.
 */
- (void)startNewSessionWithScene:(XHScene *)scene;

/**
 * Moves all movable tiles to the desired direction, then add one more tile to the grid.
 * Also refreshes score and checks game status (won/lost).
 *
 * @param direction The direction of the move (up, right, down, left).
 */
- (void)moveToDirection:(XHDirection)direction;

@end
