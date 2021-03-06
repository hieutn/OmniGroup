// Copyright 2014 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <OmniUI/OUITransition.h>

typedef enum {
    FadedPortionSlidesInFromTop,
    FadedPortionFadesInPlace,
    // a FadedPortionSlidesInFromBottom would be good, but not needed so far and hasn't been implemented yet
} OUIVerticalSplitFadeType;

@interface OUIVerticalSplitTransition : OUITransition

@property (nonatomic, assign) CGRect splitExcludingRect; // in the fromView if pushing, in the toView if popping
@property (nonatomic, assign) OUIVerticalSplitFadeType fadeType;

- (void)insertToViewIntoContainer:(id<UIViewControllerContextTransitioning>)transitionContext;

@property (nonatomic, strong) UIView *topSnapshot;
@property (nonatomic, strong) UIView *bottomSnapshot;

@end
