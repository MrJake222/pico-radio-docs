while (1) {
  ulong start = time_us_64();
  DBG_ON();
  mp3.decode_one_frame(audio_pcm_channels);
  DBG_OFF();
  ulong end = time_us_64();

  printf("load took %f ms / 1 frame\n",
         (end - start) / 1000.0f);
  sleep_ms(1000);
}
