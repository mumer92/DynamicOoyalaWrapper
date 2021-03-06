//
//  OOAudioTrack.h
//  OoyalaSDK
//
//  Created on 2/8/17.
//  Copyright © 2017 Ooyala, Inc. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>


/**
 Encapsulates important information of an AVMediaSelectionOption instance.
 
 You don't need to instantiate this class yourself. The player will pass you instances of OOAudioTrack when you want to
 know information about an audio track of a video.
 
 \ingroup item
 */
@interface OOAudioTrack : NSObject

/// Meaningful name for the audio track, retrieved from the video asset
@property (nonatomic, readonly) NSString *name;

/// Meaningful title for the audio track, created in implemenation of file
@property (nonatomic, readonly) NSString *title;

/// Laguage code of audio track, retrived from AVMediaSelectionOption (mediaSelectionOption)
@property (nonatomic, readonly) NSString *languageCode;

/// Media selection option from AVMediaSelectionGroup
@property (nonatomic, readonly) AVMediaSelectionOption *mediaSelectionOption;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithMediaSelectionOption:(AVMediaSelectionOption *)option NS_DESIGNATED_INITIALIZER;

@end
