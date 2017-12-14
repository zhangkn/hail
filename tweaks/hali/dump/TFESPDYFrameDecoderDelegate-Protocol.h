//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TFESPDYDataFrame, TFESPDYFrameDecoder, TFESPDYGoAwayFrame, TFESPDYHeadersFrame, TFESPDYPingFrame, TFESPDYRstStreamFrame, TFESPDYSettingsFrame, TFESPDYSynReplyFrame, TFESPDYSynStreamFrame, TFESPDYWindowUpdateFrame;

@protocol TFESPDYFrameDecoderDelegate <NSObject>
- (void)didReadWindowUpdateFrame:(TFESPDYWindowUpdateFrame *)arg1 frameDecoder:(TFESPDYFrameDecoder *)arg2;
- (void)didReadHeadersFrame:(TFESPDYHeadersFrame *)arg1 frameDecoder:(TFESPDYFrameDecoder *)arg2;
- (void)didReadGoAwayFrame:(TFESPDYGoAwayFrame *)arg1 frameDecoder:(TFESPDYFrameDecoder *)arg2;
- (void)didReadPingFrame:(TFESPDYPingFrame *)arg1 frameDecoder:(TFESPDYFrameDecoder *)arg2;
- (void)didReadSettingsFrame:(TFESPDYSettingsFrame *)arg1 frameDecoder:(TFESPDYFrameDecoder *)arg2;
- (void)didReadRstStreamFrame:(TFESPDYRstStreamFrame *)arg1 frameDecoder:(TFESPDYFrameDecoder *)arg2;
- (void)didReadSynReplyFrame:(TFESPDYSynReplyFrame *)arg1 frameDecoder:(TFESPDYFrameDecoder *)arg2;
- (void)didReadSynStreamFrame:(TFESPDYSynStreamFrame *)arg1 frameDecoder:(TFESPDYFrameDecoder *)arg2;
- (void)didReadDataFrame:(TFESPDYDataFrame *)arg1 frameDecoder:(TFESPDYFrameDecoder *)arg2;
@end

