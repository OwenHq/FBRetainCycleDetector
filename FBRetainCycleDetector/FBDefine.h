//
//  FBDefine.h
//  FBRetainCycleDetector
//
//  Created by owenqhuang(黄强) on 2020/5/18.
//  Copyright © 2020 Facebook. All rights reserved.
//

#ifndef FBDefine_h
#define FBDefine_h

#if TARGET_OS_OSX
#import <AppKit/AppKit.h>
#else
#import <UIKit/UIKit.h>
#endif

#if TARGET_OS_OSX
#ifndef UIView
#define UIView NSView
#endif
#endif

#endif /* FBDefine_h */
