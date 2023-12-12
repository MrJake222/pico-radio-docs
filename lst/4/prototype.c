while (!eof) {
  if (a_done_irq) {
    a_done_irq = false;

    // channel A done (first one)
    // reload first half of the buffer
    
    DBG_ON();
    f_read(&fp,
           audio_bytes,     // where
           BUF_HALF_BYTES,  // how many
           &read);
    DBG_OFF();
  }

  if (b_done_irq) {
    b_done_irq = false;

    // channel B done (second one)
    // reload second half of the buffer
    
    DBG_ON();
    f_read(&fp,
           audio_bytes + BUF_HALF_BYTES,
           BUF_HALF_BYTES,
           &read);
    DBG_OFF();
  }
}
