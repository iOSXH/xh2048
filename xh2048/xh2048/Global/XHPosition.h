//
//  XHPosition.h
//  xh2048
//
//  Created by hui xiang on 2019/2/2.
//  Copyright © 2019 xianghui. All rights reserved.
//

#ifndef XHPosition_h
#define XHPosition_h

typedef struct Position {
    NSInteger x;
    NSInteger y;
} XHPosition;

CG_INLINE XHPosition XHPositionMake(NSInteger x, NSInteger y) {
    XHPosition position;
    position.x = x; position.y = y;
    return position;
}

#endif /* XHPosition_h */
